#!/usr/bin/env bash
read -p "Nhap n: " n

isPerfectSquare() {
  if (( n < 0 )); then echo "NO"; return; fi
  local r
  r=$(python - <<PY