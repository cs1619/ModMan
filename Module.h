/*
 * Module.h
 *
 *  Created on: 19 mar. 2020
 *      author: glic
 */

#ifndef SRC_MODULE_MODULE_H_
#define SRC_MODULE_MODULE_H_


typedef enum
{
	Module_DCC 			= (1L << 0),
	Module_Hotel 		= (1L << 1),
	Module_Statistics 	= (1L << 2),
	Module_Wallet 		= (1L << 3),
	Module_Fidelium 	= (1L << 4),
	Module_NCF		 	= (1L << 5),
	Module_Tip		 	= (1L << 6),
	Module_Clerk		= (1L << 7)

} Module;


#endif /* SRC_MODULE_MODULE_H_ */
