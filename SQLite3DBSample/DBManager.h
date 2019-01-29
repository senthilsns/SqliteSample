//
//  DBManager.h
//  sqlitesample
//
//  Created by SENTHILKUMAR on 29/01/19.
//  Copyright © 2019 Personal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBManager : NSObject

@property (nonatomic, strong) NSMutableArray *arrColumnNames;
@property (nonatomic) int affectedRows;
@property (nonatomic) long long lastInsertedRowID;

-(instancetype) initWithDatabaseFileName:(NSString *)dbFileNane;
-(NSArray *)loadDataFromDBWithQuery:(NSString *)query;   //  select query.
-(void)executeQuery:(NSString *)query;          //  insert, update, delete queries.
@end
