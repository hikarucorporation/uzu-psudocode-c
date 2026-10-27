// Function : open_soundfile_via_namelist
// Namespace: 
// Entry    : 0059a180
// Prototype: int open_soundfile_via_namelist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, undefined8 * param_11, int * param_12, long param_13)
// Body     : 0059a180 - 0059a1e7


int open_soundfile_via_namelist
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              char *param_9,char *param_10,undefined8 *param_11,int *param_12,long param_13)

{
  int iVar1;
  undefined8 local_400;
  char local_3f8 [1000];
  
  iVar1 = do_open_via_path(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,"",local_3f8,&local_400,1000,1,param_11,0);
  if (iVar1 < 0) {
    return -1;
  }
  iVar1 = open_soundfile_via_fd(iVar1,param_12,param_13);
  return iVar1;
}


