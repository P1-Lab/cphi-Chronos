C++
/*
 * cphi-Chronos Harmonic Tide Engine
 * 5-constituent model: M2, S2, N2, K1, O1
 * 
 * Reference: NOAA NOS CO-OPS
 * timestamp: seconds since Unix epoch (UTC)
 * PHASE values are calibrated to this epoch
 */

#include "chronos_config.h"
#include <math.h>

const float OMEGA[] = {28.984104, 30.000000, 28.439730, 15.041069, 13.943035};

float calculate_tide(long timestamp, LocationParams loc) {
    float height = loc.MSL;
    float t_hours = (float)timestamp / 3600.0;

    for (int i = 0; i < 5; i++) {
        float angle = OMEGA[i] * t_hours + loc.PHASE[i];
        float rad = angle * (M_PI / 180.0);
        height += loc.AMP[i] * cos(rad);
    }
    return height;
}
