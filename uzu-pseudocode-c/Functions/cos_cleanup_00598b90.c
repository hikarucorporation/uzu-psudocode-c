// Function : cos_cleanup
// Namespace: 
// Entry    : 00598b90
// Prototype: undefined cos_cleanup(void)
// Body     : 00598b90 - 00598bd3


void cos_cleanup(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_cos_table_00715460;
  if (*(void **)PTR_cos_table_00715460 != (void *)0x0) {
    freebytes(*(void **)PTR_cos_table_00715460);
  }
  *(undefined8 *)puVar1 = 0;
  if (cos_newtable != (void *)0x0) {
    freebytes(cos_newtable);
  }
  cos_newtable = (void *)0x0;
  return;
}


