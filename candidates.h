#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>  // for string streams
#include <stdlib.h>

using namespace std;


void FindMatches(string candidates[][6], int cand_size, string openings[][7], int opening_size);
void GetCandidate(string candidate[6]);
void SaveCandidates(string temp[][6], int size);
void LoadCandidates(ifstream& infile, string candidates[][6], int num_candidates);
void AddCandidate(string candidates[][6], int size);
void ShowCandidatesByPosition(string candidates[][6], int size);
void PrintCandidates(string candidates[][6], int size);
void SwapCandidates(string candidates[][6], int indexA, int indexB);
void SortByRating(string candidates[][6], int num_candidates);
void FilterCandidatesByRating(string candidates[][6], int num_candidates);
void PrintCandidate(string temp[][6], int index);