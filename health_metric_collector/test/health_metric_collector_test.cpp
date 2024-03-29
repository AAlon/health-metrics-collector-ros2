/*
 * Copyright 2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#include <gmock/gmock.h>
#include <health_metric_collector/collect_and_publish.h>
#include <health_metric_collector/cpu_metric_collector.h>
#include <health_metric_collector/metric_collector.h>
#include <health_metric_collector/metric_manager.h>
#include <health_metric_collector/sys_info_collector.h>
#include <rclcpp/rclcpp.hpp>

#include <vector>

TEST(CollectorSuite, empty)
{
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  rclcpp::init(argc, argv);

  return RUN_ALL_TESTS();
}
