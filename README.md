# sick_safetyscanners_base (psiori fork)

Fork of [SICKAG/sick_safetyscanners_base](https://github.com/SICKAG/sick_safetyscanners_base) based on `08ae4b75`.

Changes for Boost 1.87+ and modern Asio:

- `AsioCompat.hpp` restores `boost::asio::io_service` on Boost >= 1.87
- Replace deprecated `address_v4::from_string` and `to_ulong`
- Drop obsolete `Boost::system` CMake component
- Include `posix_time` types explicitly in `Types.h`

Use the `boost-compat` branch for these updates.
