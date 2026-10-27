// Function : canvas_copy
// Namespace: 
// Entry    : 0050f450
// Prototype: undefined canvas_copy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0050f450 - 0050f511


void canvas_copy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_stack_ffffffffffffffd8;
  uint local_1c;
  long local_18;
  
  lVar3 = *(long *)(param_9 + 0xc0);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x20) != 0) {
      plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar4 = binbuf_free(*(void **)**(undefined8 **)(*plVar1 + 0x48));
      piVar2 = canvas_docopy(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      param_12 = (undefined8 *)**(undefined8 **)(*plVar1 + 0x48);
      *param_12 = piVar2;
      lVar3 = *(long *)(param_9 + 0xc0);
    }
    if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
      uVar4 = rtext_getseltext(*(long **)(lVar3 + 0x28),&local_18,(int *)&local_1c);
      uVar4 = pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654bf6,"r"
                          ,"clear",param_12,param_13,param_14,in_stack_ffffffffffffffd8);
      pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654bf6,"rp",
                  "append",(ulong)local_1c,local_18,param_14,in_stack_ffffffffffffffd8);
    }
  }
  return;
}


