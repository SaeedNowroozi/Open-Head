#ifndef ZAAR_ALGHORITHM_H
#define ZAAR_ALGHORITHM_H

#include <memory>
#include <model_data.h>
#include <vector>
#include <chrono>
#include <map>
#include <algorithm>
#include <exception>
#include <tuple>
#include <regex>
#include <utility>
#include <QThread>

class Zaar_alghorithm : QThread
{
public:
    Zaar_alghorithm();
    /*
    Set data for xaar alg to device
    */
    std::vector<std::vector<Model_Data>> getdata();
private:
    std::shared_ptr<Model_Data> model;
    /*
    Get data for xaar alg from model data
    */
    void setdata(std::vector<std::vector<Model_Data>> data);

    // QThread interface
protected:
    void run() override;
};

#endif // ZAAR_ALGHORITHM_H
