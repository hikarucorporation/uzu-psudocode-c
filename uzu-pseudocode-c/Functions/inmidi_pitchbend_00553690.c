// Function : inmidi_pitchbend
// Namespace: 
// Entry    : 00553690
// Prototype: undefined inmidi_pitchbend(int param_1, int param_2, int param_3)
// Body     : 00553690 - 00553714


void inmidi_pitchbend(int param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 local_38 [2];
  float local_30;
  undefined4 local_28;
  float local_20;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*(long *)(*plVar2 + 0x30) + 0x28);
  if (*(long *)(lVar1 + 8) != 0) {
    local_30 = (float)param_3;
    local_38[0] = 1;
    local_20 = (float)(param_2 + param_1 * 0x10 + 1);
    local_28 = 1;
    pd_list(*(long **)(lVar1 + 8),*plVar2 + 0xc0,2,local_38);
  }
  return;
}


