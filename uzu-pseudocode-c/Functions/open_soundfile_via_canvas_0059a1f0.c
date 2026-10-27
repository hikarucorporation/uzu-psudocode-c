// Function : open_soundfile_via_canvas
// Namespace: 
// Entry    : 0059a1f0
// Prototype: int open_soundfile_via_canvas(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, int * param_11, long param_12)
// Body     : 0059a1f0 - 0059a24e


int open_soundfile_via_canvas
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,char *param_10,int *param_11,long param_12)

{
  int iVar1;
  undefined8 local_400;
  char local_3f8 [1000];
  
  iVar1 = canvas_open(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,"",local_3f8,&local_400,1000,1);
  if (iVar1 < 0) {
    return -1;
  }
  iVar1 = open_soundfile_via_fd(iVar1,param_11,param_12);
  return iVar1;
}


