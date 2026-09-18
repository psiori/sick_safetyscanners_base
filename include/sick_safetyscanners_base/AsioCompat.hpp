#pragma once

#include <boost/asio.hpp>
#include <boost/version.hpp>

namespace boost {
namespace asio {

#if BOOST_VERSION >= 108700

/**
 * @brief Replacement for removed boost::asio::io_service::work.
 */
class io_service_work {
public:
  explicit io_service_work(io_context& context) : guard_(make_work_guard(context)) {
  }

private:
  executor_work_guard<io_context::executor_type> guard_;
};

/**
 * @brief Boost >= 1.87 removed the io_service alias; provide a drop-in replacement.
 */
struct io_service : io_context {
  io_service() = default;
  using work = io_service_work;
};

#endif

}  // namespace asio
}  // namespace boost
