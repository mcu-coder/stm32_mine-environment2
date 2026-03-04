# include "Modules.h"


/**
  * @brief  传感器数据扫描
  * @param  无
  * @retval 无
  */

void SensorScan(void)
{
	DHT11_Read_Data(&sensorData.temp, &sensorData.humi);
	sensorData.pm25 =  Pm25_Get_Value(30);
	sensorData.Smoge = MQ2_GetData_PPM();
	
}



