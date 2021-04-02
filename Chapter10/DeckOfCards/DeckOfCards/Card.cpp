#pragma once
#include <cstdint>
#include <string>

constexpr const char* suitstr = "cdhs";
constexpr const char* facecards = "ATJQK";

struct Card {
	uint8_t rank;
	uint8_t suit;
	const std::string toString() {
		char result[3] = { 'x', 'x', 0 };
		char& out_rank = result[0];
		char& out_suit = result[1];

		out_suit = suitstr[suit];
		if (rank == 0) {
			out_rank = suitstr[0];
		} 
		else if (rank > 8) {
			out_rank = facecards[rank - 8];
		}
		else {
			out_rank = rank + '1';
		}

		return (const std::string)result;
	}
};
