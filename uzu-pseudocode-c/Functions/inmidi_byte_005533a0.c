// Function : inmidi_byte
// Namespace: 
// Entry    : 005533a0
// Prototype: undefined inmidi_byte(int param_1, int param_2)
// Body     : 005533a0 - 00553410


void inmidi_byte(int param_1,int param_2)

{
  long *plVar1;
  undefined4 local_38 [2];
  float local_30;
  undefined4 local_28;
  float local_20;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long *)(**(long **)(*plVar1 + 0x30) + 8) != 0) {
    local_38[0] = 1;
    local_30 = (float)param_2;
    local_20 = (float)param_1;
    local_28 = 1;
    pd_list(*(long **)(**(long **)(*plVar1 + 0x30) + 8),0,2,local_38);
  }
  return;
}


