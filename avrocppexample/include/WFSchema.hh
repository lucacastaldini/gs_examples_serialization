/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This code was generated by avrogencpp 1.12.0-SNAPSHOT. Do not edit.*/

#ifndef WF_SCHEMA_HH_3427329507_H
#define WF_SCHEMA_HH_3427329507_H


#include <sstream>
#include <any>
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace WF {
struct TimeSpec {
    int64_t tv_sec;
    int64_t tv_nsec;
    TimeSpec() :
        tv_sec(int64_t()),
        tv_nsec(int64_t())
        { }
};

struct HeaderandWaveform {
    int32_t apid;
    int32_t counter;
    int32_t type;
    TimeSpec time;
    int32_t abstime;
    int32_t runID;
    int32_t configID;
    int32_t equalizationLevel;
    int32_t decimation;
    int32_t curOffset;
    int32_t trigOff;
    int32_t size;
    std::vector<int32_t > data;
    int32_t crc;
    HeaderandWaveform() :
        apid(int32_t()),
        counter(int32_t()),
        type(int32_t()),
        time(TimeSpec()),
        abstime(int32_t()),
        runID(int32_t()),
        configID(int32_t()),
        equalizationLevel(int32_t()),
        decimation(int32_t()),
        curOffset(int32_t()),
        trigOff(int32_t()),
        size(int32_t()),
        data(std::vector<int32_t >()),
        crc(int32_t())
        { }
};

}
namespace avro {
template<> struct codec_traits<WF::TimeSpec> {
    static void encode(Encoder& e, const WF::TimeSpec& v) {
        avro::encode(e, v.tv_sec);
        avro::encode(e, v.tv_nsec);
    }
    static void decode(Decoder& d, WF::TimeSpec& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.tv_sec);
                    break;
                case 1:
                    avro::decode(d, v.tv_nsec);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.tv_sec);
            avro::decode(d, v.tv_nsec);
        }
    }
};

template<> struct codec_traits<WF::HeaderandWaveform> {
    static void encode(Encoder& e, const WF::HeaderandWaveform& v) {
        avro::encode(e, v.apid);
        avro::encode(e, v.counter);
        avro::encode(e, v.type);
        avro::encode(e, v.time);
        avro::encode(e, v.abstime);
        avro::encode(e, v.runID);
        avro::encode(e, v.configID);
        avro::encode(e, v.equalizationLevel);
        avro::encode(e, v.decimation);
        avro::encode(e, v.curOffset);
        avro::encode(e, v.trigOff);
        avro::encode(e, v.size);
        avro::encode(e, v.data);
        avro::encode(e, v.crc);
    }
    static void decode(Decoder& d, WF::HeaderandWaveform& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.apid);
                    break;
                case 1:
                    avro::decode(d, v.counter);
                    break;
                case 2:
                    avro::decode(d, v.type);
                    break;
                case 3:
                    avro::decode(d, v.time);
                    break;
                case 4:
                    avro::decode(d, v.abstime);
                    break;
                case 5:
                    avro::decode(d, v.runID);
                    break;
                case 6:
                    avro::decode(d, v.configID);
                    break;
                case 7:
                    avro::decode(d, v.equalizationLevel);
                    break;
                case 8:
                    avro::decode(d, v.decimation);
                    break;
                case 9:
                    avro::decode(d, v.curOffset);
                    break;
                case 10:
                    avro::decode(d, v.trigOff);
                    break;
                case 11:
                    avro::decode(d, v.size);
                    break;
                case 12:
                    avro::decode(d, v.data);
                    break;
                case 13:
                    avro::decode(d, v.crc);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.apid);
            avro::decode(d, v.counter);
            avro::decode(d, v.type);
            avro::decode(d, v.time);
            avro::decode(d, v.abstime);
            avro::decode(d, v.runID);
            avro::decode(d, v.configID);
            avro::decode(d, v.equalizationLevel);
            avro::decode(d, v.decimation);
            avro::decode(d, v.curOffset);
            avro::decode(d, v.trigOff);
            avro::decode(d, v.size);
            avro::decode(d, v.data);
            avro::decode(d, v.crc);
        }
    }
};

}
#endif
