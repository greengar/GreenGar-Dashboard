//
//  ApplicationKeys.h
//  GreenGar
//
//  Created by Elliot Lee on 8/18/13.
//  Copyright (c) 2013 GreenGar. All rights reserved.
//

#ifndef GreenGar_ApplicationKeys_h
#define GreenGar_ApplicationKeys_h

/**
 * In the future, we will allow the user to dynamically add additional keys
 * within the app. For now, we will hardcode a few initial keys just to
 * make it easy to get up and running quickly.
 */


/**
 * This is the main identifier that uniquely specifies your application.
 * This is paired with a key to provide your clients access to your
 * application's data.
 */
#define PARSE_APP_ID @"REPLACE_WITH_YOUR_PARSE_APPLICATION_ID"

/**
 * This key should be used in consumer clients, like the iOS or
 * Android SDK. It adheres to object level permissions.
 */
#define PARSE_CLIENT_KEY @"REPLACE_WITH_YOUR_PARSE_CLIENT_KEY"

// Comment or remove this line after you've added your keys above.
#error Please edit ApplicationKeys.h before compiling

#endif
