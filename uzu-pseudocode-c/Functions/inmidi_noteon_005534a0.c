// Function : inmidi_noteon
// Namespace: 
// Entry    : 005534a0
// Prototype: undefined inmidi_noteon(int param_1, int param_2, int param_3, int param_4)
// Body     : 005534a0 - 00553545


void inmidi_noteon(int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 local_58 [2];
  float local_50;
  undefined4 local_48;
  float local_40;
  undefined4 local_38;
  float local_30;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar2 + 0x30);
  if (*(long *)(*(long *)(lVar1 + 0x10) + 8) != 0) {
    local_58[0] = 1;
    local_50 = (float)param_3;
    local_40 = (float)param_4;
    local_48 = 1;
    local_38 = 1;
    local_30 = (float)(param_2 + param_1 * 0x10 + 1);
    pd_list(*(long **)(*(long *)(lVar1 + 0x10) + 8),*plVar2 + 0xc0,3,local_58);
  }
  return;
}


