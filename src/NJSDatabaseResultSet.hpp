// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_NJSDATABASERESULTSET_HPP
#define DJINNI_GENERATED_NJSDATABASERESULTSET_HPP


#include "../include/DatabaseError.hpp"
#include "../include/DatabaseResultRow.hpp"
#include "NJSDatabaseError.hpp"
#include "NJSDatabaseResultRow.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/DatabaseResultSet.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDatabaseResultSet: public ledger::core::api::DatabaseResultSet {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::DatabaseResultSet> &object);
    static Nan::Persistent<ObjectTemplate> DatabaseResultSet_prototype;
    ~NJSDatabaseResultSet()
    {
        njs_impl.Reset();
    };
    NJSDatabaseResultSet(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     * Retrieve the current row pointed by the DatabaseResultSet. Return null if there is no row to retrieve.
     * @return The current row
     */
    std::shared_ptr<DatabaseResultRow> getRow();

    /** Get the number of rows updated by the query (UPDATE, INSERT, DELETE...) */
    int32_t getUpdateCount();

    /**
     * Returns true if the result set has at least one remaining row to get.
     * @return true if the result set has at least one remaining row to get, false otherwise.
     */
    bool hasNext();

    /**
     * Returns the number of remaining rows before the result set needs to load more rows
     * @return The number of remaining rows before the result set needs to load more rows.
     */
    int32_t available();

    /**
     * Internally move the result set to the next available row. This method may fail if there is no further row to fetch.
     * @return Return a result set pointing to the next row.
     */
    void next();

    /** Close the result set. */
    void close();

    /** Get the last error that occured on the database. */
    std::shared_ptr<DatabaseError> getError();

private:
    /**
     * Retrieve the current row pointed by the DatabaseResultSet. Return null if there is no row to retrieve.
     * @return The current row
     */
    static NAN_METHOD(getRow);

    /** Get the number of rows updated by the query (UPDATE, INSERT, DELETE...) */
    static NAN_METHOD(getUpdateCount);

    /**
     * Returns true if the result set has at least one remaining row to get.
     * @return true if the result set has at least one remaining row to get, false otherwise.
     */
    static NAN_METHOD(hasNext);

    /**
     * Returns the number of remaining rows before the result set needs to load more rows
     * @return The number of remaining rows before the result set needs to load more rows.
     */
    static NAN_METHOD(available);

    /**
     * Internally move the result set to the next available row. This method may fail if there is no further row to fetch.
     * @return Return a result set pointing to the next row.
     */
    static NAN_METHOD(next);

    /** Close the result set. */
    static NAN_METHOD(close);

    /** Get the last error that occured on the database. */
    static NAN_METHOD(getError);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSDATABASERESULTSET_HPP