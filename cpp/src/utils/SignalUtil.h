/*******************************************************************************
 * Copyright 上海赜睿信息科技有限公司(Zilliz) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * Proprietary and confidential.
 ******************************************************************************/
#pragma once

namespace zilliz {
namespace milvus {
namespace server {

class SignalUtil {
 public:
    static void HandleSignal(int signum);
    static void PrintStacktrace();
};

}
}
}
