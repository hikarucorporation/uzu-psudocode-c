// Function : alloc
// Namespace: hb_vector_t_hb_pool_t_hb_serialize_context_t__object_t_32u___chunk_t__false_
// Entry    : 0043a240
// Prototype: ulong alloc(uint * param_1, uint param_2)
// Body     : 0043a240 - 0043a2bb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t, 32u>::chunk_t*, false>::alloc(unsigned
   int, bool) */

ulong __cdecl
hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>::alloc
          (uint *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulong uVar3;
  uint uVar5;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    uVar3 = 0;
    goto LAB_0043a251;
  }
  uVar4 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_2 <= uVar1) goto LAB_0043a251;
  uVar5 = uVar1;
  do {
    uVar5 = uVar5 + (uVar5 >> 1) + 8;
  } while (uVar5 < param_2);
  if (uVar5 < 0x20000000) {
    if (uVar5 == 0) {
      free(*(void **)(param_1 + 2));
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(*(void **)(param_1 + 2),(ulong)uVar5 << 3);
      if (pvVar2 == (void *)0x0) {
        uVar1 = *param_1;
        if (uVar5 <= uVar1) goto LAB_0043a251;
        goto LAB_0043a29d;
      }
    }
    *(void **)(param_1 + 2) = pvVar2;
    uVar3 = CONCAT71(uVar4,1);
    *param_1 = uVar5;
  }
  else {
LAB_0043a29d:
    uVar3 = 0;
    *param_1 = ~uVar1;
  }
LAB_0043a251:
  return uVar3 & 0xffffffff;
}


