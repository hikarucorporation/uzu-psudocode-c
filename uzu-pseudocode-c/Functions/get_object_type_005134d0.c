// Function : get_object_type
// Namespace: 
// Entry    : 005134d0
// Prototype: undefined8 * get_object_type(long * param_1)
// Body     : 005134d0 - 0051356f


undefined8 * get_object_type(long *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  if (param_1 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  bVar1 = *(byte *)((long)param_1 + 0x2e) & 3;
  if ((*(byte *)((long)param_1 + 0x2e) & 3) == 0) {
    puVar2 = gensym("text");
    return puVar2;
  }
  if (bVar1 == 2) {
    puVar2 = gensym("msg");
    return puVar2;
  }
  if (bVar1 == 1) {
    puVar2 = gensym("obj");
    return puVar2;
  }
  puVar3 = binbuf_new();
  gobj_save(param_1);
  binbuf_getpos(puVar3,(int *)0x0,(int *)0x0,(long *)&local_18);
  binbuf_free(puVar3);
  return local_18;
}


