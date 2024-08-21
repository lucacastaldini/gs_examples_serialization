#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <string>
#include <google/protobuf/message.h>
 
#include "WFGenerator.hh"
#include "HKGenerator.hh"
#include "TimeSpecGen.hh"
#include "Utils.hh"
#include "ProtocolBufferEntities.hh"

#include "HK.pb.h"  // Include your generated header file for protobuf messages
#include "WF.pb.h"


int main() {
    ThreadSafeQueue<std::string> sharedQueue;
    MessageWriter<HeaderandWaveform> writer(sharedQueue);
    MessageReader<HeaderandWaveform> reader(sharedQueue);


    auto message_gen =  WFGenerator(1);
    // auto message_gen2 =  HKGenerator(1);
    
    // Generate a message and write it to the queue
    HeaderandWaveform message = message_gen.get();
    // HeaderHK message2 = message_gen2.get();
    // print_WF(message);
    // print_HK(message2);
    writer.writeMessage(message);

    // // Read the message from the queue
    HeaderandWaveform received_message;
    if (reader.readMessage(received_message)) {
        std::cout << "Received HeaderHK message:" << std::endl;
        std::cout << "APID: " << received_message.apid() << std::endl;
        std::cout << "Counter: " << received_message.counter() << std::endl;
        // Output other fields as needed
    } else {
        std::cerr << "Failed to read the message." << std::endl;
    }
    print_WF(received_message);
    return 0;
}