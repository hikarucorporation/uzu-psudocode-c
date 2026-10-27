// Function : glist_getnextxy
// Namespace: 
// Entry    : 0050e5c0
// Prototype: undefined glist_getnextxy(long param_1, undefined4 * param_2, undefined4 * param_3)
// Body     : 0050e5c0 - 0050e619


void glist_getnextxy(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = **(long **)(*plVar2 + 0x48);
  if (*(long *)(lVar1 + 0x78) == param_1) {
    *param_2 = *(undefined4 *)(lVar1 + 0x80);
    *param_3 = *(undefined4 *)(lVar1 + 0x84);
    return;
  }
  *param_3 = 0x28;
  *param_2 = 0x28;
  return;
}


