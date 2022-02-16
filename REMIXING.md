# Remixing ARTSEY

## Work In Progress

The below is a work in progress. We are actively working on this area of the ARTSEY QMK code.

## Compiling

You need to set `ARTSEY_REMIX=yes` at build time (see `DEVELOPMENT.md` for additional detail) so your remixes and adjustments will be included in the build.

## Layer adjustments (non-combo keycodes)

To adjust any/all ARTSEY non-combo keys you can create a file at `users/artsey/layout/remixes/remix_layers.h` with the contents of the adjustments you'd like. You'll want to define the entire layer like we do in `users/artsey/layout/layers.h` for the override to work.
