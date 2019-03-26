#ifndef __BSP_H
#define __BSP_H

#ifdef __cplusplus
extern "C" {
#endif

#define RED_ON()  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET)
#define RED_OFF()  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET)

#define YELLOW_ON()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_SET)
#define YELLOW_OFF()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_RESET)


#define GREEN_ON()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_SET)
#define GREEN_OFF()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_RESET)

#define WALK_ON()  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET)
#define WALK_OFF()  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET)

#define DWALK_ON()  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET)
#define DWALK_OFF()  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET)

#define MODE_READ()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_3) == SET)
#define GREEN_TIME()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == SET)
#define WALK_INTERVAL()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_5) == SET)
#define CONSTANT   99

// Function prototype
void BSP_Init(void);
void Signal_Pass(void);
void Signal_Block(void);
void Signal_Flash(void);

#ifdef __cplusplus
}
#endif

#endif /* __BSP_H */
