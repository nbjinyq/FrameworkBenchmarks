/**
 *
 *  World.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <trantor/utils/Date.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

using namespace drogon::orm;

namespace drogon_model
{
namespace hello_world
{
class World
{
  public:
    struct Cols
    {
        static const std::string id;
        static const std::string randomnumber;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    typedef int32_t PrimaryKeyType;
    const PrimaryKeyType &getPrimaryKey() const;
    explicit World(const Row &r) noexcept;
    World() = default;

    /**  For column id  */
    /// Get the value of the column id, returns the default value if the column
    /// is null
    const int32_t &getValueOfId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getId() const noexcept;
    /// Set the value of the column id
    void setId(const int32_t &id) noexcept;

    /**  For column randomnumber  */
    /// Get the value of the column randomnumber, returns the default value if
    /// the column is null
    const int32_t &getValueOfRandomnumber() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getRandomnumber() const noexcept;
    /// Set the value of the column randomnumber
    void setRandomnumber(const int32_t &randomnumber) noexcept;

    static size_t getColumnNumber() noexcept
    {
        return 2;
    }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;

  private:
    friend Mapper<World>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    /// For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int32_t> _id;
    std::shared_ptr<int32_t> _randomnumber;
    struct MetaData
    {
        const std::string _colName;
        const std::string _colType;
        const std::string _colDatabaseType;
        const ssize_t _colLength;
        const bool _isAutoVal;
        const bool _isPrimaryKey;
        const bool _notNull;
    };
    static const std::vector<MetaData> _metaData;
    bool _dirtyFlag[2] = {false};
};

}  // namespace hello_world
}  // namespace drogon_model
