// Function : json_extract_value_ex
// Namespace: 
// Entry    : 0018b060
// Prototype: void * json_extract_value_ex(long * param_1, undefined * param_2, undefined8 param_3)
// Body     : 0018b060 - 0018b0ca


void * json_extract_value_ex(long *param_1,undefined *param_2,undefined8 param_3)

{
  void *pvVar1;
  size_t __size;
  undefined1 auVar2 [16];
  void *local_30;
  long local_28;
  
  if (param_1 == (long *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    auVar2 = json_extract_get_value_size(param_1);
    __size = auVar2._8_8_ + auVar2._0_8_;
    if (param_2 == (undefined *)0x0) {
      pvVar1 = malloc(__size);
    }
    else {
      pvVar1 = (void *)(*(code *)param_2)(param_3,__size);
    }
    local_28 = auVar2._0_8_ + (long)pvVar1;
    local_30 = pvVar1;
    json_extract_copy_value((long *)&local_30,param_1);
  }
  return pvVar1;
}


