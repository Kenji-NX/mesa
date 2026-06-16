/*
 * Copyright 2025 LunarG, Inc.
 * Copyright 2025 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef MTL_COMMAND_QUEUE_H
#define MTL_COMMAND_QUEUE_H 1

#include "mtl_types.h"

#include <stdint.h>

mtl_command_queue *mtl_new_command_queue(mtl_device *device);

void mtl_signal_event(mtl_command_queue *queue, mtl_event *event,
                      uint64_t value);
void mtl_wait_for_event(mtl_command_queue *queue, mtl_event *event,
                        uint64_t value);

void mtl_command_queue_commit(mtl_command_queue *queue,
                              mtl_command_buffer **command_buffers,
                              uint32_t count);

void mtl_command_queue_signal_drawable(mtl_command_queue *queue,
                                       void *drawable);

void mtl_drawable_present(void *drawable);

#endif /* MTL_COMMAND_QUEUE_H */
