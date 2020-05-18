// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSOPERATIONQUERY_HPP
#define DJINNI_GENERATED_NJSOPERATIONQUERY_HPP


#include "../include/OperationOrderKey.hpp"
#include "NJSOperationListCallback.hpp"
#include "NJSQueryFilterCpp.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/OperationQuery.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSOperationQuery final {
public:

    static void Initialize(Local<Object> target);
    NJSOperationQuery() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::OperationQuery> &object);
    static Nan::Persistent<ObjectTemplate> OperationQuery_prototype;

private:
    /**
     * Apply given order to query's operation.
     * @param key, OperationOrderKey object which defines order
     * @param descending, bool
     * @return OperationQuery object, new ordered operation
     */
    static NAN_METHOD(addOrder);

    /**
     * Get applied filter on operation query.
     * @return QueryFilter object
     */
    static NAN_METHOD(filter);

    /**
     * Add offset to the operation query.
     * @param from, 32-bit integer
     */
    static NAN_METHOD(offset);

    /**
     * Add limit to the operation query results.
     * @param count, 32-bit integer
     */
    static NAN_METHOD(limit);

    /**
     *TODO
     * Complete the operation query.
     */
    static NAN_METHOD(complete);

    /**TODO */
    static NAN_METHOD(partial);

    /**
     * Execute query to retrieve operations.
     * @param callback, if execute method succeed, ListCallback object returning a List of Operation objects
     */
    static NAN_METHOD(execute);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSOPERATIONQUERY_HPP
