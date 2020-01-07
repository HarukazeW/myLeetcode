#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using std::vector;
using std::unordered_map;


/* Definition for singly-linked list.*/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };