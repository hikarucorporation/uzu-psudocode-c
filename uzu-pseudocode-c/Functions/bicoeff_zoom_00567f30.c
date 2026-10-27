// Function : bicoeff_zoom
// Namespace: 
// Entry    : 00567f30
// Prototype: undefined bicoeff_zoom(float param_1, long param_2)
// Body     : 00567f30 - 00567f37


void bicoeff_zoom(float param_1,long param_2)

{
  *(int *)(param_2 + 0x40) = (int)param_1;
  return;
}


