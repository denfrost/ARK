/*
* This source file is part of ArkGameFrame
* For the latest info, see https://github.com/ArkGame
*
* Copyright (c) 2013-2018 ArkGame authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#pragma once

#include "SDK/Core/Base/AFCData.h"
#include "SDK/Core/Base/AFCDataList.h"
#include "SDK/Core/Base/AFGUID.h"
#include "SDK/Core/Base/AFPlatform.hpp"


enum ARK_ENTITY_EVENT
{
    ENTITY_EVT_NONE                 = 0,
    ENTITY_EVT_DESTROY              = 1,
    ENTITY_EVT_PRE_DESTROY          = 2,
    ENTITY_EVT_PRE_LOAD_DATA        = 3,
    ENTITY_EVT_LOAD_DATA            = 4,
    ENTITY_EVT_PRE_EFFECT_DATA      = 5,
    ENTITY_EVT_EFFECT_DATA          = 6,
    ENTITY_EVT_POST_EFFECT_DATA     = 7,
    ENTITY_EVT_DATA_FINISHED        = 8,
    ENTITY_EVT_ALL_FINISHED,        //瑙掕壊鍒涘缓瀹屾垚鍚庡啀鎸傚洖璋?
};

struct DATA_TABLE_EVENT_DATA
{
    DATA_TABLE_EVENT_DATA()
        : nOpType(ENTITY_EVT_NONE)
        , nRow(-1)
        , nCol(-1)
        , strName(NULL_STR.c_str())
    {
    }

    uint8_t nOpType;
    int16_t nRow;
    int16_t nCol;
    DataTableName strName;
};

using HEART_BEAT_FUNCTOR = std::function<int(const AFGUID&, const std::string&, const int64_t, const int)>;
using MODULE_HEART_BEAT_FUNCTOR = std::function<void()>;
using DATA_NODE_EVENT_FUNCTOR = std::function<int(const AFGUID&, const std::string&, const AFIData&, const AFIData&)>;
using DATA_TABLE_EVENT_FUNCTOR = std::function<int(const AFGUID&, const DATA_TABLE_EVENT_DATA&, const AFIData&, const AFIData&)>;
using CLASS_EVENT_FUNCTOR = std::function<bool(const AFGUID&, const std::string&, const ARK_ENTITY_EVENT, const AFIDataList&)>;
using EVENT_PROCESS_FUNCTOR = std::function<int(const AFGUID&, const int, const AFIDataList&)>;
//using EVENT_ASYNC_PROCESS_BEGIN_FUNCTOR = std::function<int(const AFGUID&, const int, std::string&)>;
//using EVENT_ASYNC_PROCESS_END_FUNCTOR = std::function<int(const AFGUID&, const int, const int, const std::string&)>;
using TIMER_FUNCTOR = std::function<void(const std::string&, const AFGUID&)>;
using SCHEDULER_FUNCTOR = std::function<bool(const int, const int)>;

using HEART_BEAT_FUNCTOR_PTR = ARK_SHARE_PTR<HEART_BEAT_FUNCTOR>;
using MODULE_HEART_BEAT_FUNCTOR_PTR = ARK_SHARE_PTR<MODULE_HEART_BEAT_FUNCTOR>;
using DATA_NODE_EVENT_FUNCTOR_PTR = ARK_SHARE_PTR<DATA_NODE_EVENT_FUNCTOR>;
using DATA_TABLE_EVENT_FUNCTOR_PTR = ARK_SHARE_PTR<DATA_TABLE_EVENT_FUNCTOR>;
using CLASS_EVENT_FUNCTOR_PTR = ARK_SHARE_PTR<CLASS_EVENT_FUNCTOR>;
using EVENT_PROCESS_FUNCTOR_PTR = ARK_SHARE_PTR<EVENT_PROCESS_FUNCTOR>;
//using EVENT_ASYNC_PROCESS_BEGIN_FUNCTOR_PTR = ARK_SHARE_PTR<EVENT_ASYNC_PROCESS_BEGIN_FUNCTOR>;
//using EVENT_ASYNC_PROCESS_END_FUNCTOR_PTR = ARK_SHARE_PTR<EVENT_ASYNC_PROCESS_END_FUNCTOR>;
using TIMER_FUNCTOR_PTR = ARK_SHARE_PTR<TIMER_FUNCTOR>;
using SCHEDULER_FUNCTOR_PTR = ARK_SHARE_PTR<SCHEDULER_FUNCTOR>;