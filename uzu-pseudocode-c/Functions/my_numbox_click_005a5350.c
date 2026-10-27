// Function : my_numbox_click
// Namespace: 
// Entry    : 005a5350
// Prototype: undefined my_numbox_click(float param_1, float param_2, long param_3)
// Body     : 005a5350 - 005a5373


void my_numbox_click(float param_1,float param_2,long param_3)

{
  glist_grab(*(long *)(param_3 + 0x30),param_3,0x5a5380,my_numbox_key,(int)param_1,(int)param_2);
  return;
}


