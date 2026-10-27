// Function : pd_tilde_free
// Namespace: 
// Entry    : 004e2fe0
// Prototype: undefined pd_tilde_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e2fe0 - 004e306f


void pd_tilde_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  FILE *__stream;
  FILE *__stream_00;
  undefined4 uVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  __stream = *(FILE **)(param_9 + 0x48);
  __stream_00 = *(FILE **)(param_9 + 0x50);
  uVar1 = 0;
  uVar2 = 0;
  *(undefined8 *)(param_9 + 0x48) = 0;
  *(undefined8 *)(param_9 + 0x50) = 0;
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
    uVar1 = extraout_XMM0_Da;
    uVar2 = extraout_XMM0_Db;
  }
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
    uVar1 = extraout_XMM0_Da_00;
    uVar2 = extraout_XMM0_Db_00;
  }
  if (0 < *(__pid_t *)(param_9 + 0x60)) {
    waitpid(*(__pid_t *)(param_9 + 0x60),(int *)0x0,0);
    uVar1 = extraout_XMM0_Da_01;
    uVar2 = extraout_XMM0_Db_01;
  }
  binbuf_clear(CONCAT44(uVar2,uVar1),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int **)(param_9 + 0x58));
  *(undefined8 *)(param_9 + 0x48) = 0;
  *(undefined8 *)(param_9 + 0x50) = 0;
  *(undefined4 *)(param_9 + 0x60) = 0xffffffff;
  clock_free(*(double **)(param_9 + 0x30));
  freebytes(*(void **)(param_9 + 0x88));
  freebytes(*(void **)(param_9 + 0x90));
  return;
}


