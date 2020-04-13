/*
    (c) 2019 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip software and any
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party
    license terms applicable to your use of third party software (including open source software) that
    may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
*/

#include <avr/io.h>

int main (void)
{
    /* Configure SW0 as input */
    PORTC.DIRCLR = PIN7_bm;
    /* Configure LED0 pin as output */
    PORTC.DIRSET = PIN6_bm;
    /* Enable the internal pull-up for PC7 */
    PORTC.PIN7CTRL |= PORT_PULLUPEN_bm; 
    
    while (1)
    {
        /* Check the status of SW0 */
        /* 0: Pressed */
        if (!(PORTC.IN & (PIN7_bm)))
        {
            /* LED0 on */
            PORTC.OUTSET = PIN6_bm;
        }
        /* 1: Released */
        else
        {
            /* LED0 off */
            PORTC.OUTCLR = PIN6_bm;
        }
    }
}

