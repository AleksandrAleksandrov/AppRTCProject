//
//  ViewController.swift
//  AppRTCProject
//
//  Created by Aleksandr on 8/22/18.
//  Copyright © 2018 Aleksandr. All rights reserved.
//

import UIKit

protocol SetRoomName {
    func setRoomName(roomName: String)
}

class ViewController: UIViewController {
    
//    var delegate : ARDAppClientDelegate?

    @IBOutlet weak var roomTextField: UITextField!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        let viewController = segue.destination as? VideoRoomController
        viewController?.roomName = roomTextField.text
    }

    @IBAction func joinButton(_ sender: UIButton) {
        performSegue(withIdentifier: "VideoCallSegue", sender: roomTextField.text)
    }
}

