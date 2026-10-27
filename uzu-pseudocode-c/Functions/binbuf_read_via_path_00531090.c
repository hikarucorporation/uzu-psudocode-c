// Function : binbuf_read_via_path
// Namespace: 
// Entry    : 00531090
// Prototype: bool binbuf_read_via_path(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, char * param_10, char * param_11, int param_12)
// Body     : 00531090 - 0053111b


bool binbuf_read_via_path
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9,char *param_10
               ,char *param_11,int param_12)

{
  int __fd;
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char *local_410;
  char local_408 [1008];
  
  pcVar1 = local_408;
  ppcVar2 = &local_410;
  uVar3 = 1000;
  __fd = open_via_path(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,
                       param_10,"",pcVar1,ppcVar2,1000);
  if (__fd < 0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: can\'t open",param_10,pcVar1,(char *)ppcVar2,uVar3);
    bVar4 = true;
  }
  else {
    close(__fd);
    uVar3 = binbuf_read(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,local_410,local_408,param_12,ppcVar2,uVar3);
    bVar4 = (int)uVar3 != 0;
  }
  return bVar4;
}


