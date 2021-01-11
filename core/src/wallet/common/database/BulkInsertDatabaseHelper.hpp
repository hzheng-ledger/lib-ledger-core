/*
 *
 * BulkInsertDatabaseHelper.hpp
 * ledger-core
 *
 * Created by Pierre Pollastri on 05/01/2021.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef LEDGER_CORE_BULKINSERTDATABASEHELPER_HPP
#define LEDGER_CORE_BULKINSERTDATABASEHELPER_HPP

#include <soci.h>
#include <wallet/common/Operation.h>
#include <database/PreparedStatement.hpp>

namespace ledger {
    namespace core {
        struct OperationBinding {
            std::vector <std::string> type;
            std::vector <std::string> senders;
            std::vector <std::string> receivers;
            std::vector <std::string> amount;
            std::vector <std::string> fees;
            std::vector <Option<std::string>> blockUid;
            std::vector <std::string> serializedTrust;

            std::vector <std::string> uid;
            std::vector <std::string> accountUid;
            std::vector <std::string> walletUid;
            std::vector <std::chrono::system_clock::time_point> date;
            std::vector <std::string> currencyName;

            void update(const Operation& operation);
            void reset();
        };

        struct BlockBinding {
            std::vector<std::string> uid;
            std::vector<std::string> hash;
            std::vector<uint64_t> height;
            std::vector<std::chrono::system_clock::time_point> time;
            std::vector<std::string> currencyName;

            void update(const Block &b);
            void clear();
        };

        class BulkInsertDatabaseHelper {
        public:
            static const StatementDeclaration<OperationBinding> UPSERT_OPERATION;
            static const StatementDeclaration<BlockBinding> UPSERT_BLOCK;
        };
    }
}

#endif //LEDGER_CORE_BULKINSERTDATABASEHELPER_HPP
