// Function : do_dataout_time
// Namespace: 
// Entry    : 0057d980
// Prototype: undefined do_dataout_time(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, char * param_10, time_t param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0057d980 - 0057da8e


void do_dataout_time(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                    char *param_10,time_t param_11,undefined8 param_12,uint *param_13,uint *param_14
                    )

{
  long *plVar1;
  tm *ptVar2;
  undefined8 *puVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  time_t local_90;
  int local_88 [2];
  float local_80;
  undefined4 local_78;
  float local_70;
  undefined4 local_68;
  float local_60;
  undefined4 local_58;
  float local_50;
  undefined4 local_48;
  float local_40;
  undefined4 local_38;
  float local_30;
  undefined4 local_28;
  float local_20;
  
  local_90 = param_11;
  ptVar2 = localtime(&local_90);
  if (ptVar2 == (tm *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"unable to convert timestamp %ld",local_90,param_12,
             (char *)param_13,param_14);
  }
  local_88[0] = 1;
  local_80 = (float)(ptVar2->tm_year + 0x76c);
  local_78 = 1;
  local_70 = (float)(ptVar2->tm_mon + 1);
  local_68 = 1;
  local_60 = (float)ptVar2->tm_mday;
  local_58 = 1;
  local_50 = (float)ptVar2->tm_hour;
  local_48 = 1;
  local_40 = (float)ptVar2->tm_min;
  local_38 = 1;
  local_30 = (float)ptVar2->tm_sec;
  local_28 = 1;
  local_20 = (float)ptVar2->tm_isdst;
  plVar1 = *(long **)(param_9 + 0x58);
  puVar3 = gensym(param_10);
  outlet_anything(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar1,puVar3,7,local_88,param_13,param_14);
  return;
}


