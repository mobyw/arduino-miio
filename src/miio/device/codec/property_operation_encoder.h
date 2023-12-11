/**
 * @par     Copyright (c):
 *
 *    Copyright 2019 MIoT,MI
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef __PROPERTY_OPERATION_ENCODER_H__
#define __PROPERTY_OPERATION_ENCODER_H__

#include "miio/device/typedef/property_operation.h"

int property_operation_encode_param(
    char *pbuf, size_t buf_sz, property_operation_t *opt, bool has_value);
int property_operation_encode_tail(char *pbuf, size_t buf_sz);

#endif /* __PROPERTY_OPERATION_ENCODER_H__ */
