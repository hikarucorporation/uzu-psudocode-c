// Function : cputime_bang
// Namespace: 
// Entry    : 00581040
// Prototype: undefined cputime_bang(long param_1)
// Body     : 00581040 - 00581048


void cputime_bang(long param_1)

{
  times((tms *)(param_1 + 0x30));
  return;
}


