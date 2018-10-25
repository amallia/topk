/**
 * Copyright 2018-present Antonio Mallia <me@antoniomallia.it>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <utility>

namespace topk {

namespace details {} // namespace details

template <typename T>
class topk {
   public:
    explicit topk(size_t size) {}

    /*
     * Insert directly if threshold is not set,
     * otherwise check if bigger than threshold and replace lowest
     */
    bool insert(const T &value) {}

    /*
     * Fake insert
     */
    bool would_enter(const T &value) const {}

    /*
     * Returns threshold value
     */
    const T &threshold() const {}

    /*
     * Set threshold value
     */
    void threshold(const T &value) {}

    /*
     * Clear all elements
     */
    void clear() {}

    /*
     * Check if queue is empty
     */
    bool empty() const {}

    /*
     * Returns actual number of elements already inserted
     */
    size_t size() const {}

    /*
     * Returns number of elements that can be inserted
     */
    size_t capacity() const {}

    /*
     * Returns the top k elements,
     * or all elements if fewer than k are inserted.
     */
    const std::vector<T> &get() const {}

   private:
    /* Topk max size */
    size_t m_capacity;

    /* Topk actual size */
    size_t m_size;

    /* The largest of the lowest k elements we've seen so far */
    T m_threshold;

    /* Data */
    std::vector<T> m_queue;
};

} // namespace topk