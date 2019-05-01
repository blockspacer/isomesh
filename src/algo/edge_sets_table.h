/* This file is part of Isomesh library, released under MIT license.
  Copyright (c) 2018-2019 Pavel Asyutchenko (sventeam@yandex.ru) */
// Lookup table used by Manifold Dual Contouring

/* Each Marching Cubes vertex configuration generates up to four sets of
 surface-crossing edges which belong to the same surface patch. These sets
 are precomputed in this table as bitsets. */
static const uint16_t edgeSetsTable[256][4] = {
	{ 0b000000000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001100001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b010000000110, 0b000000000000, 0b000000000000 },
	{ 0b011000000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011100001100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100100000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b100000001100, 0b000000000000, 0b000000000000 },
	{ 0b101100000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110000001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110100000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b111000001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b111100000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000110010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000010011001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b001010011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b000010011001, 0b010000000110, 0b000000000000, 0b000000000000 },
	{ 0b011000000101, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b011010011100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b100010010101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b100000001100, 0b000110010000, 0b000000000000 },
	{ 0b101010010110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110000001010, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b110010010011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b111000001001, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b111010010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000110000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b000000110011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100111010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b010000000110, 0b001000110000, 0b000000000000 },
	{ 0b010000110101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010100111100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b100100000101, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b000000110011, 0b000000000000, 0b000000000000 },
	{ 0b100100110110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110000001010, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b110100000011, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b110000111001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110100110000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001110100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001010101001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000110100011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000010101010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b001110100000, 0b000000000000, 0b000000000000 },
	{ 0b001010101001, 0b010000000110, 0b000000000000, 0b000000000000 },
	{ 0b010110100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010010101100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b001110100000, 0b000000000000, 0b000000000000 },
	{ 0b101010100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000110100011, 0b100000001100, 0b000000000000, 0b000000000000 },
	{ 0b100010100110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110000001010, 0b001110100000, 0b000000000000, 0b000000000000 },
	{ 0b111010100011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110110101001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110010100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010001100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b001100001010, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b000001100110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b000001100110, 0b000000000000, 0b000000000000 },
	{ 0b001001100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001101101100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b100100000101, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b100000001100, 0b010001100000, 0b000000000000 },
	{ 0b101100000110, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b100001101010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100101100011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101001101001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101101100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000110010000, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b000010011001, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b000110010000, 0b010001100000, 0b000000000000 },
	{ 0b001010011010, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b000110010000, 0b000001100110, 0b000000000000, 0b000000000000 },
	{ 0b000001100110, 0b000010011001, 0b000000000000, 0b000000000000 },
	{ 0b001001100101, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b001011111100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b000110010000, 0b010001100000, 0b000000000000 },
	{ 0b100010010101, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b100000001100, 0b000110010000, 0b010001100000 },
	{ 0b101010010110, 0b010001100000, 0b000000000000, 0b000000000000 },
	{ 0b000110010000, 0b100001101010, 0b000000000000, 0b000000000000 },
	{ 0b100011110011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101001101001, 0b000110010000, 0b000000000000, 0b000000000000 },
	{ 0b101011110000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011001010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b011001010000, 0b000000000000, 0b000000000000 },
	{ 0b010001010011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010101011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001001010110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b001001010110, 0b000000000000, 0b000000000000 },
	{ 0b000001010101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000101011100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b011001010000, 0b000000000000, 0b000000000000 },
	{ 0b100100000101, 0b011001010000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b010001010011, 0b000000000000, 0b000000000000 },
	{ 0b110101010110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101001011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101101010011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100001011001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100101010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011111000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011011001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010111000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010011001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001111000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001011001111, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000111000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000011001100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b011111000000, 0b000000000000, 0b000000000000 },
	{ 0b111011000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010111000011, 0b100000001100, 0b000000000000, 0b000000000000 },
	{ 0b110011000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101111001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101011000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100111001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100011000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100011000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b001100001010, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b010000000110, 0b100011000000, 0b000000000000 },
	{ 0b011000000101, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b011100001100, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b000011001100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000111000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b000011001100, 0b000000000000, 0b000000000000 },
	{ 0b001111000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010011001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010111000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011011001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011111000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100101010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100001011001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b100101010000, 0b000000000000, 0b000000000000 },
	{ 0b101001011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b100101010000, 0b000000000000, 0b000000000000 },
	{ 0b100001011001, 0b010000000110, 0b000000000000, 0b000000000000 },
	{ 0b011000000101, 0b100101010000, 0b000000000000, 0b000000000000 },
	{ 0b111001011100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000101011100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000001010101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b000101011100, 0b000000000000, 0b000000000000 },
	{ 0b001001010110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010101011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010001010011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011101011001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011001010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000110000, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b001000110000, 0b100011000000, 0b000000000000 },
	{ 0b000000110011, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b000100111010, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b001000110000, 0b100011000000, 0b000000000000 },
	{ 0b000100001001, 0b010000000110, 0b001000110000, 0b100011000000 },
	{ 0b010000110101, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b010100111100, 0b100011000000, 0b000000000000, 0b000000000000 },
	{ 0b000011001100, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b001000110000, 0b000111000101, 0b000000000000, 0b000000000000 },
	{ 0b000000110011, 0b000011001100, 0b000000000000, 0b000000000000 },
	{ 0b000111110110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000110000, 0b010011001010, 0b000000000000, 0b000000000000 },
	{ 0b010111000011, 0b001000110000, 0b000000000000, 0b000000000000 },
	{ 0b010011111001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010111110000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101101100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101001101001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100101100011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100001101010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b101101100000, 0b000000000000, 0b000000000000 },
	{ 0b101001101001, 0b010000000110, 0b000000000000, 0b000000000000 },
	{ 0b110101100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110001101100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001101101100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001001100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000101101111, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000001100110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011101101010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011001100011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010101101001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010001100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110010100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b110010100000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b110010100000, 0b000000000000, 0b000000000000 },
	{ 0b001100001010, 0b110010100000, 0b000000000000, 0b000000000000 },
	{ 0b100010100110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b100010100110, 0b000000000000, 0b000000000000 },
	{ 0b101010100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101110101100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010010101100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010110100101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b010010101100, 0b000000000000, 0b000000000000 },
	{ 0b011110100110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000010101010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000110100011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001010101001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001110100000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110100110000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110000111001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b110100110000, 0b000000000000, 0b000000000000 },
	{ 0b111000111010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100100110110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000111111, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101100110101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101000111100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010100111100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000110101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b010100111100, 0b000000000000, 0b000000000000 },
	{ 0b011000110110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100111010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000000110011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001100111001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000110000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b111010010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b111010010000, 0b000000000000, 0b000000000000 },
	{ 0b110010010011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110110011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101010010110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b101010010110, 0b000000000000, 0b000000000000 },
	{ 0b100010010101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100110011100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011010011100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011110010101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010010011111, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010110010110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001010011010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001110010011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000010011001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000110010000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b111100000000, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b111000001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110100000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b110000001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101100000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b101000001111, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100100000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b100000001100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011100001100, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b011000000101, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010100001111, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b010000000110, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001100001010, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b001000000011, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000100001001, 0b000000000000, 0b000000000000, 0b000000000000 },
	{ 0b000000000000, 0b000000000000, 0b000000000000, 0b000000000000 }
};
