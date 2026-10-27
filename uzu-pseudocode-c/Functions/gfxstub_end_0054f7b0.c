// Function : gfxstub_end
// Namespace: 
// Entry    : 0054f7b0
// Prototype: undefined8 gfxstub_end(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 0054f7b0 - 0054f7e5


undefined8
gfxstub_end(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,undefined8 param_11,long *param_12,char *param_13,undefined8 param_14
           )

{
  undefined8 in_RAX;
  
  canvas_dataproperties
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 8)
             ,*(long **)(param_9 + 0x10),gfxstub_binbuf,param_12,param_13,param_14,(char)in_RAX);
  if (gfxstub_binbuf != (undefined4 *)0x0) {
    binbuf_free(gfxstub_binbuf);
  }
  gfxstub_binbuf = (undefined4 *)0x0;
  return in_RAX;
}


