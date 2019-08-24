/**
 *
 *  Fortune.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Fortune.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon_model::hello_world;

const std::string Fortune::Cols::id = "id";
const std::string Fortune::Cols::message = "message";
const std::string Fortune::primaryKeyName = "id";
const bool Fortune::hasPrimaryKey = true;
const std::string Fortune::tableName = "fortune";

const std::vector<typename Fortune::MetaData> Fortune::_metaData = {
    {"id", "int32_t", "integer", 4, 0, 1, 1},
    {"message", "std::string", "character varying", 2048, 0, 0, 1}};
const std::string &Fortune::getColumnName(size_t index) noexcept(false)
{
    assert(index < _metaData.size());
    return _metaData[index]._colName;
}
Fortune::Fortune(const Row &r) noexcept
{
    if (!r["id"].isNull())
    {
        _id = std::make_shared<int32_t>(r["id"].as<int32_t>());
    }
    if (!r["message"].isNull())
    {
        _message =
            std::make_shared<std::string>(r["message"].as<std::string>());
    }
}
const int32_t &Fortune::getValueOfId() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if (_id)
        return *_id;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Fortune::getId() const noexcept
{
    return _id;
}
void Fortune::setId(const int32_t &id) noexcept
{
    _id = std::make_shared<int32_t>(id);
    _dirtyFlag[0] = true;
}

const typename Fortune::PrimaryKeyType &Fortune::getPrimaryKey() const
{
    assert(_id);
    return *_id;
}

const std::string &Fortune::getValueOfMessage() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_message)
        return *_message;
    return defaultValue;
}
const std::shared_ptr<std::string> &Fortune::getMessage() const noexcept
{
    return _message;
}
void Fortune::setMessage(const std::string &message) noexcept
{
    _message = std::make_shared<std::string>(message);
    _dirtyFlag[1] = true;
}
void Fortune::setMessage(std::string &&message) noexcept
{
    _message = std::make_shared<std::string>(std::move(message));
    _dirtyFlag[1] = true;
}

void Fortune::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Fortune::insertColumns() noexcept
{
    static const std::vector<std::string> _inCols = {"id", "message"};
    return _inCols;
}

void Fortune::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (getId())
    {
        binder << getValueOfId();
    }
    else
    {
        binder << nullptr;
    }
    if (getMessage())
    {
        binder << getValueOfMessage();
    }
    else
    {
        binder << nullptr;
    }
}

const std::vector<std::string> Fortune::updateColumns() const
{
    std::vector<std::string> ret;
    for (size_t i = 0; i < sizeof(_dirtyFlag); i++)
    {
        if (_dirtyFlag[i])
        {
            ret.push_back(getColumnName(i));
        }
    }
    return ret;
}

void Fortune::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (_dirtyFlag[0])
    {
        if (getId())
        {
            binder << getValueOfId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[1])
    {
        if (getMessage())
        {
            binder << getValueOfMessage();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Fortune::toJson() const
{
    Json::Value ret;
    if (getId())
    {
        ret["id"] = getValueOfId();
    }
    else
    {
        ret["id"] = Json::Value();
    }
    if (getMessage())
    {
        ret["message"] = getValueOfMessage();
    }
    else
    {
        ret["message"] = Json::Value();
    }
    return ret;
}
