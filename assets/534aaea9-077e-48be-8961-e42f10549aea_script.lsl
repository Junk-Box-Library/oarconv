default
{
state_entry()
{
llParticleSystem([ PSYS_PART_MAX_AGE, 7.900000,
PSYS_PART_FLAGS, 267,
PSYS_PART_START_COLOR, <0.91941, 0.91941, 0.91941>,
PSYS_PART_END_COLOR, <1.00000, 1.00000, 1.00000>,
PSYS_PART_START_SCALE, <0.02150, 0.02150, 0.00000>,
PSYS_PART_END_SCALE, <2.20000, 2.20000, 0.00000>,
PSYS_SRC_PATTERN, 2,
PSYS_SRC_BURST_RATE,0.081000,
PSYS_SRC_ACCEL,<0.00000, 0.00000, 0.30000>,
PSYS_SRC_BURST_PART_COUNT,3,
PSYS_SRC_BURST_RADIUS,0.000000,
PSYS_SRC_BURST_SPEED_MIN,0.410000,
PSYS_SRC_BURST_SPEED_MAX,0.010000,
PSYS_SRC_INNERANGLE,0.000000,
PSYS_SRC_OUTERANGLE,0.000000,
PSYS_SRC_OMEGA,<0.00000, -0.20000, 0.00000>,
PSYS_SRC_MAX_AGE,0.000000,
// was originally from Neb
// PSYS_PART_START_ALPHA,1.000000,
PSYS_PART_START_ALPHA,0.100000,
PSYS_PART_END_ALPHA,0.000000,
// was originally from Neb
// PSYS_SRC_TEXTURE, "6a630e9d-0667-4f5f-9710-24385d1b7f06",
PSYS_SRC_TEXTURE, "894cd53d-1274-4d3e-8777-8365d66a9d71", // smoke
PSYS_SRC_TARGET_KEY,(key)"" ]);
}
}