// this line is for c++ preprocessor only include one time this file
#pragma once
// import the header HttpSimpleController from drogon framework
#include <drogon/HttpSimpleController.h>
// indicate if we want the elements defined in the namespace drogon they are available for your use
using namespace drogon;
// the name expression ':' is for extends class
class TestController : public drogon::HttpSimpleController<TestController>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    // list path definitions here;
    // PATH_ADD("/path", "filter1", "filter2", HttpMethod1, HttpMethod2...);
    PATH_LIST_END
};
