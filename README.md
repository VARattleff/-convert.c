# convert opg 

## Kompilering

For at kompilere dette projekt på en ARM-baseret Mac M2, kan du bruge følgende kommando i terminalen:

```bash
gcc \
src/core/convert.c \
src/core/utils.c \
src/core/weight/weight_converter.c \
src/core/time/time_converter.c \
src/core/valuta/valuta_converter.c \
src/gui/weight_gui.c \
src/gui/convert_gui.c \
src/gui/time_gui.c \
src/gui/valuta_converter_gui.c \
-Iinclude -o convert
```