# Reporte de Cobertura

Se ejecutó la herramienta `gcov` sobre el archivo `solution.cpp` utilizando el conjunto de pruebas definido en `tests.cpp`. 

* **Cobertura de líneas alcanzada:** 100.00% (42 de 42 líneas ejecutadas).
* **Conclusión:** Las pruebas proporcionadas (tanto el caso general como los casos borde intrínsecos de la fuerza bruta y el algoritmo óptimo) ejercitan exitosamente todas las ramas y condicionales de nuestra implementación.

marco@iMac PC1 % gcov tests_cov-solution.gcda
File 'src/solution.cpp'
Lines executed:100.00% of 42
Creating 'solution.cpp.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/vector'
Lines executed:30.19% of 159
Creating 'vector.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/sort.h'
Lines executed:0.00% of 14
Creating 'sort.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__iterator/wrap_iter.h'
Lines executed:53.85% of 13
Creating 'wrap_iter.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/find.h'
Lines executed:100.00% of 8
Creating 'find.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__memory/compressed_pair.h'
Lines executed:57.89% of 19
Creating 'compressed_pair.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__memory/allocator.h'
Lines executed:20.00% of 15
Creating 'allocator.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__memory/allocator_traits.h'
Lines executed:23.08% of 13
Creating 'allocator_traits.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__memory/pointer_traits.h'
Lines executed:0.00% of 6
Creating 'pointer_traits.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/new'
Lines executed:0.00% of 23
Creating 'new.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__debug_utils/randomize_range.h'
Lines executed:0.00% of 2
Creating 'randomize_range.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/unwrap_iter.h'
Lines executed:50.00% of 8
Creating 'unwrap_iter.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__debug_utils/strict_weak_ordering_check.h'
Lines executed:0.00% of 3
Creating 'strict_weak_ordering_check.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__split_buffer'
Lines executed:90.00% of 30
Creating '__split_buffer.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/max.h'
Lines executed:100.00% of 4
Creating 'max.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/min.h'
Lines executed:0.00% of 4
Creating 'min.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/limits'
Lines executed:0.00% of 2
Creating 'limits.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/comp.h'
Lines executed:0.00% of 2
Creating 'comp.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/stdexcept'
Lines executed:0.00% of 4
Creating 'stdexcept.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__memory/allocate_at_least.h'
Lines executed:0.00% of 2
Creating 'allocate_at_least.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__memory/uninitialized_algorithms.h'
Lines executed:30.00% of 10
Creating 'uninitialized_algorithms.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__utility/swap.h'
Lines executed:100.00% of 5
Creating 'swap.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__utility/exception_guard.h'
Lines executed:0.00% of 9
Creating 'exception_guard.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/initializer_list'
Lines executed:0.00% of 3
Creating 'initializer_list.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/unwrap_range.h'
Lines executed:0.00% of 4
Creating 'unwrap_range.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__utility/pair.h'
Lines executed:0.00% of 6
Creating 'pair.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/copy.h'
Lines executed:0.00% of 7
Creating 'copy.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/copy_move_common.h'
Lines executed:0.00% of 9
Creating 'copy_move_common.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__string/constexpr_c_functions.h'
Lines executed:0.00% of 9
Creating 'constexpr_c_functions.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__type_traits/invoke.h'
Lines executed:100.00% of 2
Creating 'invoke.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__algorithm/equal.h'
Lines executed:0.00% of 7
Creating 'equal.h.gcov'

File '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__functional/identity.h'
Lines executed:100.00% of 2
Creating 'identity.h.gcov'