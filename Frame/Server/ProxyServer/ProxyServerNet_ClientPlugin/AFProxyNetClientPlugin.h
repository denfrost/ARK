/*****************************************************************************
// * This source file is part of ArkGameFrame                                *
// * For the latest info, see https://github.com/ArkGame                     *
// *                                                                         *
// * Copyright(c) 2013 - 2017 ArkGame authors.                               *
// *                                                                         *
// * Licensed under the Apache License, Version 2.0 (the "License");         *
// * you may not use this file except in compliance with the License.        *
// * You may obtain a copy of the License at                                 *
// *                                                                         *
// *     http://www.apache.org/licenses/LICENSE-2.0                          *
// *                                                                         *
// * Unless required by applicable law or agreed to in writing, software     *
// * distributed under the License is distributed on an "AS IS" BASIS,       *
// * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
// * See the License for the specific language governing permissions and     *
// * limitations under the License.                                          *
// *                                                                         *
// *                                                                         *
// * @FileName  AFProxyNetClientPlugin.h                                                *
// * @Author    Ark Game Tech                                                *
// * @Date      2015-12-15                                                   *
// * @Module    AFProxyNetClientPlugin                                                  *
// * @email     ArkGameTech@163.com                                          *
// * @brief     AFProxyNetClientPlugin                                                  *
*****************************************************************************/

#ifndef NF_PROXYSERVER_NETCLIENTPLUGIN_MODULE_H
#define NF_PROXYSERVER_NETCLIENTPLUGIN_MODULE_H
///
#include "SDK/Interface/AFIPlugin.h"
#include "SDK/Interface/AFIPluginManager.h"

#ifdef AFPROXYSERVERNET_CLIENTPLUGIN_EXPORTS
#define AFPROXYSERVERNET_CLIENTPLUGIN_API __declspec(dllexport)
#else
#define AFPROXYSERVERNET_CLIENTPLUGIN_API __declspec(dllimport)
#endif

class AFProxyNetClientPlugin : public AFIPlugin
{
public:
    AFProxyNetClientPlugin(AFIPluginManager* p)
    {
        pPluginManager = p;
    }
    virtual const int GetPluginVersion();

    virtual const std::string GetPluginName();

    virtual void Install();

    virtual void Uninstall();
};

#endif