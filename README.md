# convert opg 

## Valuta Converter Projekt

Dette er et simpelt program til at konvertere valutaer mellem forskellige enheder(usd, eur og dkk).

## Kompilering

For at kompilere dette projekt på en ARM-baseret Mac M2, kan du bruge følgende kommando i terminalen:

```bash
gcc \
src/core/converter.c \
src/core/utils.c \
src/core/dkk/dkk_converter.c \
src/core/eur/eur_converter.c \
src/core/usd/usd_converter.c \
src/gui/dkk/dkk_ui.c \
src/gui/eur/eur_ui.c \
src/gui/usd/usd_ui.c \
src/gui/valuta_converter_gui.c \
-o valuta_converter
```
